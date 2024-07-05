#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    istringstream iss(sentence);
    string word;
    vector<string> result;
    
    while (iss >> word) {
        if (isPrime(word.length())) {
            result.push_back(word);
        }
    }
    
    string output;
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) output += " ";
        output += result[i];
    }
    
    return output;
}

int main() {
    cout << (words_in_sentence("Here is a prime example") == "Here is prime") << endl;
    return 0;
}