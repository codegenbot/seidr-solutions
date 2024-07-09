```cpp
int do_algebra(vector<string> ops, vector<int>& operands) {
    for(int i=0; i<ops.size(); i++) {
        if(ops[i] == "//") {
            int quotient = operands[i]/operands[0];
            cout << "The result of the operation is: " << quotient << endl;
        }
        else if(ops[i] == "*") {
            int product = operands[i]*operands[0];
            cout << "The result of the operation is: " << product << endl;
        }
    }
}

int main() {
    vector<string> ops = {"//", "*"};
    vector<int> operands = {7, 3, 4};
    int result = do_algebra(ops, operands);
    return 0;
}