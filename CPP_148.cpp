bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    string planet1, planet2;
    cout << "Enter the first planet: ";
    cin >> planet1;
    cout << "Enter the second planet: ";
    cin >> planet2;
    
    vector<string> result = bf(planet1, planet2);
    if(result.empty()) {
        cout << "Planets not found." << endl;
    } else if(issame({"Mercury", "Venus", "Earth"}, result)) {
        cout << "The planets are in order from Mercury to Earth." << endl;
    } else if(issame({"Mars", "Jupiter", "Saturn"}, result)) {
        cout << "The planets are in order from Mars to Saturn." << endl;
    } else if(issame({"Uranus", "Neptune"}, result)) {
        cout << "The planets are in order from Uranus to Neptune." << endl;
    } else {
        cout << "The planets are not in order." << endl;
    }
    
    return 0;
}