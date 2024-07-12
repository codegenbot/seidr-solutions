#include <vector>
#include <string>
#include <stdexcept>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size();
}

vector<string> by_length(const vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    
    for (int i = 0; i < numbers.size(); i++) {
        if (i > 0 && numbers[i] != numbers[i-1]) {
            return {""};
        }
    }
    
    vector<string> result;
    
    for (int number : numbers) {
        if (number == 0) {
            result.push_back("Zero");
        } else if (number % 100 < 10) {
            switch (number % 10) {
                case 1: result.push_back("One"); break;
                case 2: result.push_back("Two"); break;
                case 3: result.push_back("Three"); break;
                case 4: result.push_back("Four"); break;
                case 5: result.push_back("Five"); break;
                case 6: result.push_back("Six"); break;
                case 7: result.push_back("Seven"); break;
                case 8: result.push_back("Eight"); break;
                case 9: result.push_back("Nine"); break;
            }
        } else if (number % 100 < 20) {
            switch (number % 10) {
                case 1: result.push_back("Ten"); break;
                case 2: result.push_back("Eleven"); break;
                case 3: result.push_back("Twelve"); break;
                case 4: result.push_back("Thirteen"); break;
                case 5: result.push_back("Fourteen"); break;
                case 6: result.push_back("Fifteen"); break;
                case 7: result.push_back("Sixteen"); break;
                case 8: result.push_back("Seventeen"); break;
                case 9: result.push_back("Eighteen"); break;
            }
        } else {
            switch (number % 100 / 10) {
                case 1: result.push_back("Twenty");
                case 2: result.push_back("Thirty");
                case 3: result.push_back("Forty");
                case 4: result.push_back("Fifty");
                case 6: result.push_back("Sixty");
                case 7: result.push_back("Seventy");
                case 8: result.push_back("Eighty");
                case 9: result.push_back("Ninety");
            }
            
            if (number % 10 > 0) {
                switch (number % 10) {
                    case 1: result.back() += " One"; break;
                    case 2: result.back() += " Two"; break;
                    case 3: result.back() += " Three"; break;
                    case 4: result.back() += " Four"; break;
                    case 5: result.back() += " Five"; break;
                    case 6: result.back() += " Six"; break;
                    case 7: result.back() += " Seven"; break;
                    case 8: result.back() += " Eight"; break;
                    case 9: result.back() += " Nine"; break;
                }
            }
        }
    }
    
    return result;
}