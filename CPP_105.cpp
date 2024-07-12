using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a == b)
        return true;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> byLength(int num) {
    vector<string> result;

    switch (num % 1000 / 100) {
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

    switch (num % 100 / 10) {
        case 1:
            result.push_back("Ten");
            break;
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

    if (num % 10 != 0) {
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
    }

    return result;
}

int main() {
    int num = 984;  
    vector<string> result1 = byLength(num);
    assert(issame(result1 , {"Nine", "Eight", "Four"}));
    
    return 0;