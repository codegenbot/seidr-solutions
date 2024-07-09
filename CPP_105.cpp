bool issame(vector<string>, vector<string>);

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        string num = "";
        switch (i) {
            case 1: num = "One"; break;
            case 2: num = "Two"; break;
            case 3: num = "Three"; break;
            case 4: num = "Four"; break;
            case 5: num = "Five"; break;
            case 6: num = "Six"; break;
            case 7: num = "Seven"; break;
            case 8: num = "Eight"; break;
            case 9: num = "Nine"; break;
        }
        result.push_back(num);
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}