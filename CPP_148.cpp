#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> bf(string planet1,string planet2){
    vector<string> result;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int i, j;
    for(i=0; i<8; i++){
        if(planet1 == planets[i]){
            break;
        }
    }

    for(j=i+1; j<8; j++){
        if(planet2 == planets[j]){
            break;
        }
    }

    if(i >= 8 || j < 0){
        return vector<string>();
    }

    int start = max(i, 0);
    int end = min(j, 7);

    for(int k=start; k<=end; k++){
        result.push_back(planets[k]);
    }

    return result;
}