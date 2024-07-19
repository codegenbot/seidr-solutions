// Task: Write a function that checks if an array of weights can be balanced by planes with limited capacity.
bool will_it_fly(vector<int> weights, int planeCapacity) {
    string str = "";
    for (int weight : weights) {
        str += to_string(weight);
    }
    bool balanced = str == reverse(str).substr(0, str.length());
    return balanced && accumulate(weights.begin(), weights.end(), 0) <= planeCapacity;
}