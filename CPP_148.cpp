#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    for(int i=0;i<a.size()&&!b.empty();i++){
        if(find(b.begin(),b.end(),a[i])!=b.end())
            b.erase(remove(b.begin(),b.end(),a[i]),b.end());
        else
            return false;
    }
    return b.empty();
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if ((i >= index1 && i <= index2) || (i > index2 && i < index1)) {
            result.push_back(planets[i]);
        }
    }

    return result;
}

int main{
    string planet1, planet2;
    std::cout << "Enter the first planet: ";
    std::cin >> planet1;
    std::cout << "Enter the second planet: ";
    std::cin >> planet2;

    vector<string> output = bf(planet1, planet2);

    if(output.size() > 0) {
        cout << "The common planets between " << planet1 << " and " << planet2 << " are: ";
        for (auto str : output) {
            cout << str << " ";
        }
        cout << endl;
    } else {
        cout << planet1 << " and " << planet2 << " do not have any common planets." << endl;
    }
}