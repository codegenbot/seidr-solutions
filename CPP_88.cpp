sort(array.begin(), array.end(), [array](int a, int b) { return (array.front() + array.back()) % 2 ? a < b : a > b; });
    return array;
}