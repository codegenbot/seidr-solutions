auto unique_end = unique(input.begin(), input.end());
vector<int> output(input.begin(), unique_end);
sort(output.begin(), output.end());
for (int i : output) {
    cout << i << " ";
}