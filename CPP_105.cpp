```c++
vector<string> numToWords(int num) {
    vector<string> result;
    if (num < 0 || num > 99999) {
        // handle error
    } else {
        switch (num / 10000) {
            case 1:
                result.push_back("Ten Thousand");
                break;
            case 2:
                result.push_back("Twenty Thousand");
                break;
            case 3:
                result.push_back("Thirty Thousand");
                break;
            case 4:
                result.push_back("Forty Thousand");
                break;
            case 5:
                result.push_back("Fifty Thousand");
                break;
            case 6:
                if (num % 60000 == 60000)
                    result.push_back("Sixty Thousand");
                else
                    result.push_back("Sixty");
                switch (num % 10000) {
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
                        if (num % 6000 == 6000)
                            result.push_back("Sixty");
                        else
                            result.push_back("Six");
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
                                if (num % 600 == 600)
                                    result.push_back("Sixty");
                                else
                                    result.push_back("Six");
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
                                        if (num % 7 == 97)
                                            result = {"Ninety-Seven"};
                                        else
                                            result.push_back("Six") | {"And"} | {"Seven"};
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
                            }
                        }
                    case 6: 
                        if (num % 6000 == 6000)
                            result.push_back("Sixty");
                        else
                            result.push_back("Six");
                        switch (num % 100) {
                            case 1: 
                                result = {"One", "Hundred"} | {"And"} | {"One"};
                                break;
                            case 2: 
                                result = {"Two", "Hundred"} | {"And"} | {"One"};
                                break;
                            case 3: 
                                result = {"Three", "Hundred"} | {"And"} | {"One"};
                                break;
                            case 4: 
                                result = {"Four", "Hundred"} | {"And"} | {"One"};
                                break;
                            case 5: 
                                result = {"Five", "Hundred"} | {"And"} | {"One"};
                                break;
                            case 6: 
                                if (num % 600 == 600)
                                    result.push_back("Sixty");
                                else
                                    result.push_back("Six");
                                switch (num % 10) {
                                    case 1: 
                                        result = {"One", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 2: 
                                        result = {"Two", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 3: 
                                        result = {"Three", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 4: 
                                        result = {"Four", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 5: 
                                        result = {"Five", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 6: 
                                        if (num % 7 == 97)
                                            result = {"Ninety-Seven"};
                                        else
                                            result.push_back("Six") | {"And"} | {"Seven"};
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
                            }
                        case 7: 
                            if (num % 7000 == 7000)
                                result.push_back("Seven Thousand");
                            else
                                result.push_back("Seven");
                            switch (num % 100) {
                                case 1: 
                                    result = {"One", "Hundred"} | {"And"} | {"One"};
                                    break;
                                case 2: 
                                    result = {"Two", "Hundred"} | {"And"} | {"One"};
                                    break;
                                case 3: 
                                    result = {"Three", "Hundred"} | {"And"} | {"One"};
                                    break;
                                case 4: 
                                    result = {"Four", "Hundred"} | {"And"} | {"One"};
                                    break;
                                case 5: 
                                    result = {"Five", "Hundred"} | {"And"} | {"One"};
                                    break;
                                case 6: 
                                    if (num % 600 == 600)
                                        result.push_back("Sixty");
                                    else
                                        result.push_back("Six");
                                    switch (num % 10) {
                                        case 1: 
                                            result = {"One", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 2: 
                                            result = {"Two", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 3: 
                                            result = {"Three", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 4: 
                                            result = {"Four", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 5: 
                                            result = {"Five", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 6: 
                                            if (num % 7 == 97)
                                                result = {"Ninety-Seven"};
                                            else
                                                result.push_back("Six") | {"And"} | {"Seven"};
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
                                }
                            case 8: 
                                if (num % 8000 == 8000)
                                    result.push_back("Eight Thousand");
                                else
                                    result.push_back("Eight");
                                switch (num % 100) {
                                    case 1: 
                                        result = {"One", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 2: 
                                        result = {"Two", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 3: 
                                        result = {"Three", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 4: 
                                        result = {"Four", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 5: 
                                        result = {"Five", "Hundred"} | {"And"} | {"One"};
                                        break;
                                    case 6: 
                                        if (num % 600 == 600)
                                            result.push_back("Sixty");
                                        else
                                            result.push_back("Six");
                                        switch (num % 10) {
                                            case 1: 
                                                result = {"One", "Hundred"} | {"And"} | {"One"};
                                                break;
                                            case 2: 
                                                result = {"Two", "Hundred"} | {"And"} | {"One"};
                                                break;
                                            case 3: 
                                                result = {"Three", "Hundred"} | {"And"} | {"One"};
                                                break;
                                            case 4: 
                                                result = {"Four", "Hundred"} | {"And"} | {"One"};
                                                break;
                                            case 5: 
                                                result = {"Five", "Hundred"} | {"And"} | {"One"};
                                                break;
                                            case 6: 
                                                if (num % 7 == 97)
                                                    result = {"Ninety-Seven"};
                                                else
                                                    result.push_back("Six") | {"And"} | {"Seven"};
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
                                    }
                                case 9: 
                                    if (num % 9000 == 9000)
                                        result.push_back("Nine Thousand");
                                    else
                                        result.push_back("Nine");
                                    switch (num % 100) {
                                        case 1: 
                                            result = {"One", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 2: 
                                            result = {"Two", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 3: 
                                            result = {"Three", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 4: 
                                            result = {"Four", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 5: 
                                            result = {"Five", "Hundred"} | {"And"} | {"One"};
                                            break;
                                        case 6: 
                                            if (num % 600 == 600)
                                                result.push_back("Sixty");
                                            else
                                                result.push_back("Six");
                                            switch (num % 10) {
                                                case 1: 
                                                    result = {"One", "Hundred"} | {"And"} | {"One"};
                                                    break;
                                                case 2: 
                                                    result = {"Two", "Hundred"} | {"And"} | {"One"};
                                                    break;
                                                case 3: 
                                                    result = {"Three", "Hundred"} | {"And"} | {"One"};
                                                    break;
                                                case 4: 
                                                    result = {"Four", "Hundred"} | {"And"} | {"One"};
                                                    break;
                                                case 5: 
                                                    result = {"Five", "Hundred"} | {"And"} | {"One"};
                                                    break;
                                                case 6: 
                                                    if (num % 7 == 97)
                                                        result = {"Ninety-Seven"};
                                                    else
                                                        result.push_back("Six") | {"And"} | {"Seven"};
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
                                    }
                                }

                                cout << "The Roman numeral for the number is: ";
                                for (int i = 0; i < result.size(); i++) {
                                    cout << result[i];
                                }
                                cout << endl;

                                return 0;

                            }