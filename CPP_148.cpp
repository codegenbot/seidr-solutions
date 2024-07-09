#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    if (planet1 == "Mercury" || planet1 == "Venus" || planet1 == "Earth" || 
        planet1 == "Mars" || planet1 == "Jupiter" || planet1 == "Saturn" || 
        planet1 == "Uranus" || planet1 == "Neptune") {
            if (planet2 == "Mercury" || planet2 == "Venus" || planet2 == "Earth" || 
                planet2 == "Mars" || planet2 == "Jupiter" || planet2 == "Saturn" || 
                planet2 == "Uranus" || planet2 == "Neptune") {
                if (planet1 != planet2) {
                    result.push_back("The distance between the two planets is different.");
                } else {
                    result.push_back("The distance between the two planets is the same.");
                }
            } else {
                result.push_back("Invalid Planet Name");
            }
        } else {
            result.push_back("Invalid Planet Name");
        }

    return result;
}