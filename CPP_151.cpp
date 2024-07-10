int main() {
    vector<double> lst;
    double odd_sum = 0;

    for (string line; getline(cin, line); ) {
        if (!line.empty()) {
            double val = stod(line);
            int diff = abs((int)val - 5);
            if (diff % 2 != 0) {
                lst.push_back(val);
                odd_sum += diff;
            }
        }
    }

    cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : lst) {
        cout << x << " ";
    }
    cout << endl;

    cout << "The sum of the differences is: " << odd_sum << endl;
    return 0;
}