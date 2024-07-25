int main() {
    vector<int> input;

    // Read input from user
    while (true) {
        int x;
        cin >> x;
        if (!cin || x == -1)
            break;
        input.push_back(x);
    }

    // Solve the problem
    int nextSmallest = next_smallest(input);

    cout << "The 2nd smallest element of the vector is: " << nextSmallest << endl;

    return 0;
}

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // Return None
    sort(lst.begin(), lst.end());
    for (auto it = lst.begin(); std::next(it) != lst.end(); ++it) {
        if (*it > *std::prev(it))
            return *it;
    }
    return -1; // Return None
}