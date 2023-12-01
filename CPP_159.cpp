vector<int> eat(int number, int need, int remaining) {
    number += need;
    remaining -= need;
    if (remaining < 0) {
        number += remaining;
        remaining = 0;
    }
    vector<int> result = {number, remaining};
    return result;
}