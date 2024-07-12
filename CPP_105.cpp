```cpp
vector<string> numberToWords(int num) {
    vector<string> result;

    if (num == 0)
        return {"Zero"};

    if (num < 10) {
        switch (num) {
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
        switch (num) {
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
        }
    } else if (num < 100) {
        switch (num % 10) {
            case 1: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-One");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-One");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-One");
                else
                    result.push_back("Ninety-One");
                break;
            case 2: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Two");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Two");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Two");
                else
                    result.push_back("Ninety-Two");
                break;
            case 3: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Three");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Three");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Three");
                else
                    result.push_back("Ninety-Three");
                break;
            case 4: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Four");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Four");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Four");
                else
                    result.push_back("Ninety-Four");
                break;
            case 5: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Five");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Five");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Five");
                else
                    result.push_back("Ninety-Five");
                break;
            case 6: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Six");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Six");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Six");
                else
                    result.push_back("Ninety-Six");
                break;
            case 7: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Seven");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Seven");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Seven");
                else
                    result.push_back("Ninety-Seven");
                break;
            case 8: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Eight");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Eight");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Eight");
                else
                    result.push_back("Ninety-Eight");
                break;
            case 9: 
                if (num % 100 / 10 == 6)
                    result.push_back("Sixty-Nine");
                else if (num % 100 / 10 == 7)
                    result.push_back("Seventy-Nine");
                else if (num % 100 / 10 == 8)
                    result.push_back("Eighty-Nine");
                else
                    result.push_back("Ninety-Nine");
                break;
        }
    } else {
        switch (num % 100) {
            case 1: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"One", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("One") | {"And"} | {"Hundred"};
                break;
            case 2: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Two", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Two") | {"And"} | {"Hundred"};
                break;
            case 3: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Three", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Three") | {"And"} | {"Hundred"};
                break;
            case 4: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Four", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Four") | {"And"} | {"Hundred"};
                break;
            case 5: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Five", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Five") | {"And"} | {"Hundred"};
                break;
            case 6: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Six", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Six") | {"And"} | {"Hundred"};
                break;
            case 7: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Seven", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Seven") | {"And"} | {"Hundred"};
                break;
            case 8: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Eight", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Eight") | {"And"} | {"Hundred"};
                break;
            case 9: 
                if (num % 400 == 3 || num % 4 == 1)
                    result = {"Nine", "Hundred"} | {"And"} | {"One"};
                else
                    result.push_back("Nine") | {"And"} | {"Hundred"};
                break;
        }
    }

    return result;
}