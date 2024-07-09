#include <vector>
using namespace std;

bool issame(vector<string> v1, vector<string> v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    vector<string> result = bf("Mars", "Saturn");
    for (const string& s : result) {
        cout << s << endl;
    }
    
    assert(issame(bf("Mars", "Saturn"), {"Earth"})); 
    return 0;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> result;

    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int index1 = -1;
    int index2 = -1;
    bool exists1 = false, exists2 = false;

    for (int i = 0; i < 8; i++) {
        if (planets[i] == planet1) {
            index1 = i;
            exists1 = true;
        }
        else if (planets[i] == planet2) {
            index2 = i;
            exists2 = true;
        }

        if (index1 != -1 && index2 != -1)
            break;
    }

    if (!exists1 || !exists2) {
        return result;
    }

    int dist = abs(index1 - index2);

    if(dist > 3) {
        string temp = planet1;
        planet1 = planet2;
        planet2 = temp;

        dist = abs(index1 - index2);
    }
    
    for (int i = 0; i < 8; i++) {
        int j = (i + dist) % 8;
        
        if ((index1 <= index2 && i >= index1 && i <= index2) || 
            (index1 > index2 && (i >= index1 && i < index2) || i >= 0 && i <= index2 - index1)) {
            result.push_back(planets[i]);
        }
    }

    sort(result.begin(), result.end());

    return result;
}