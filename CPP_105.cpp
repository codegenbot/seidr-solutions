```c++
bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numberToWords(int num) {
    vector<string> result;

    if (num < 10) {
        switch (num % 10) {
            case 1: 
                result.push_back("One");
                break;
            case 2: 
                result.push_back("Two");
                break;
            case 3: 
                result.push_back("Three");
                break;
            case 4: 
                result.push_back("Four");
                break;
            case 5: 
                result.push_back("Five");
                break;
            case 6: 
                result.push_back("Six");
                break;
            case 7: 
                result.push_back("Seven");
                break;
            case 8: 
                result.push_back("Eight");
                break;
            case 9: 
                result.push_back("Nine");
                break;
        }
    } else if (num < 20) {
        switch (num % 10) {
            case 1: 
                if (num % 100 / 10 == 1)
                    result.push_back("Eleven");
                else if (num % 100 / 10 == 2)
                    result.push_back("Twelve");
                else if (num % 100 / 10 == 3)
                    result.push_back("Thirteen");
                else if (num % 100 / 10 == 4)
                    result.push_back("Fourteen");
                else if (num % 100 / 10 == 5)
                    result.push_back("Fifteen");
                else if (num % 100 / 10 == 6)
                    result.push_back("Sixteen");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventeen");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighteen");
                else
                    result.push_back("Nineteen");
                break;
            case 2: 
                if (num % 100 / 10 == 1)
                    result.push_back("Twenty-Two");
                else if (num % 100 / 10 == 2)
                    result.push_back("Twenty-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Twenty-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Twenty-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Twenty-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Twenty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Twenty-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Twenty-Eight");
                else
                    result.push_back("Twenty-Nine");
                break;
            case 3: 
                if (num % 100 / 10 == 1)
                    result.push_back("Thirty-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Thirty-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Thirty-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Thirty-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Thirty-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Thirty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Thirty-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Thirty-Eight");
                else
                    result.push_back("Thirty-Nine");
                break;
            case 4: 
                if (num % 100 / 10 == 1)
                    result.push_back("Forty-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Forty-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Forty-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Forty-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Forty-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Forty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Forty-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Forty-Eight");
                else
                    result.push_back("Forty-Nine");
                break;
            case 5: 
                if (num % 100 / 10 == 1)
                    result.push_back("Fifty-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Fifty-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Fifty-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Fifty-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Fifty-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Fifty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Fifty-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Fifty-Eight");
                else
                    result.push_back("Fifty-Nine");
                break;
            case 6: 
                if (num % 100 / 10 == 1)
                    result.push_back("Sixty-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Sixty-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Sixty-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Sixty-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Sixty-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Sixty-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Sixty-Eight");
                else
                    result.push_back("Sixty-Nine");
                break;
            case 7: 
                if (num % 100 / 10 == 1)
                    result.push_back("Seventy-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Seventy-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Seventy-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Seventy-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Seventy-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Seventy-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Seventy-Eight");
                else
                    result.push_back("Seventy-Nine");
                break;
            case 8: 
                if (num % 100 / 10 == 1)
                    result.push_back("Eighty-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Eighty-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Eighty-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Eighty-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Eighty-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Eighty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Eighty-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Eight");
                else
                    result.push_back("Eighty-Nine");
                break;
            case 9: 
                if (num % 100 / 10 == 1)
                    result.push_back("Ninety-One");
                else if (num % 100 / 10 == 2)
                    result.push_back("Ninety-Two");
                else if (num % 100 / 10 == 3)
                    result.push_back("Ninety-Three");
                else if (num % 100 / 10 == 4)
                    result.push_back("Ninety-Four");
                else if (num % 100 / 10 == 5)
                    result.push_back("Ninety-Five");
                else if (num % 100 / 10 == 6)
                    result.push_back("Ninety-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Ninety-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Ninety-Eight");
                else
                    result.push_back("Ninety-Nine");
                break;
        }
    } else {
        int hundreds = num / 100;
        int remainder = num % 100;

        if (hundreds > 1) {
            result.push_back(std::to_string(hundreds) + " Hundred");
        } else if (hundreds == 1) {
            result.push_back("One Hundred");
        }

        if (remainder > 0) {
            if (result.size() > 1) {
                result.push_back("and");
            }
            switch (remainder) {
                case 10: 
                    result.push_back("Ten");
                    break;
                case 11: 
                    result.push_back("Eleven");
                    break;
                case 12: 
                    result.push_back("Twelve");
                    break;
                case 13: 
                    result.push_back("Thirteen");
                    break;
                case 14: 
                    result.push_back("Fourteen");
                    break;
                case 15: 
                    result.push_back("Fifteen");
                    break;
                case 16: 
                    result.push_back("Sixteen");
                    break;
                case 17: 
                    result.push_back("Seventeen");
                    break;
                case 18: 
                    result.push_back("Eighteen");
                    break;
                case 19: 
                    result.push_back("Nineteen");
                    break;
                default:
                    switch (remainder % 10) {
                        case 2: 
                            result.push_back("Twenty");
                            break;
                        case 3: 
                            result.push_back("Thirty");
                            break;
                        case 4: 
                            result.push_back("Forty");
                            break;
                        case 5: 
                            result.push_back("Fifty");
                            break;
                        case 6: 
                            result.push_back("Sixty");
                            break;
                        case 7: 
                            result.push_back("Seventy");
                            break;
                        case 8: 
                            result.push_back("Eighty");
                            break;
                        case 9: 
                            result.push_back("Ninety");
                            break;
                    }
                    if (remainder % 10 > 0) {
                        switch (remainder % 10) {
                            case 1:
                                result.push_back("One");
                                break;
                            case 2:
                                result.push_back("Two");
                                break;
                            case 3:
                                result.push_back("Three");
                                break;
                            case 4:
                                result.push_back("Four");
                                break;
                            case 5:
                                result.push_back("Five");
                                break;
                            case 6:
                                result.push_back("Six");
                                break;
                            case 7:
                                result.push_back("Seven");
                                break;
                            case 8:
                                result.push_back("Eight");
                                break;
                            case 9:
                                result.push_back("Nine");
                                break;
                        }
                    }
            }
        }
    }

    std::string result_str = "";
    for (const auto& word : result) {
        if (!word.empty()) {
            result_str += word;
            if (result.size() > 1 && !result.back().empty()) {
                result_str += " ";
            }
        }
    }

    return result_str;
}

#include <iostream>
#include <vector>
#include <string>

int main() {
    int num = 12345;
    std::cout << number_to_words(num) << std::endl;

    num = 9999;
    std::cout << number_to_words(num) << std::endl;

    return 0;
}