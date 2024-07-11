sort(array.begin(), array.end(), [&](int a, int b) {
    if ((array.front() + array.back()) % 2 == 0) {
        return a > b;
    } else {
        return a < b;
    }
});
return array;
}