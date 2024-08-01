int stackSize = 0;
char* stack = new char[stackSize];

bool correct_bracketing(string brackets) {
    for (char bracket : brackets) {
        if (bracket == '<') {
            stack[stackSize] = '<';
            stackSize++;
        } else if (bracket == '>') {
            if (stackSize == 0)
                return false;
            stackSize--;
        }
    }
    return stackSize == 0;
}