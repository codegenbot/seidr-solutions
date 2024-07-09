bool correct_bracketing(const std::string& str); // Function signature

int main()
{
    assert(!correct_bracketing("()()(()())()))"));
    std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}

bool correct_bracketing(const std::string& str)
{
    bool result = true;
    int count = 0;

    for (char c : str) {
        if (c == '(') {
            count++;
        }
        else if (c == ')') {
            if (count <= 0) {
                result = false;
                break;
            }
            count--;
        }
    }

    return !result;
}