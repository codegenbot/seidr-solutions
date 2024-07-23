sort(array.begin(), array.end(), [&](int a, int b) {
    return (array.front() + array.back()) % 2 == 0 ? a > b : a < b;
});
return array;
}