vector<string> numToWords(int num) {
    vector<string> result;

    if (num < 0 || num > 999) {
        throw invalid_argument("Number out of range");
    }

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
            case 10:
                result.push_back("Ten");
                break;
        }
    } else if (num < 20) {
        switch (num) {
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
            case 20: 
                result.push_back("Twenty");
                break;
        }
        switch (num / 100) {
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
        if (num > 20) {
            switch (num % 100) {
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

    return result;
}