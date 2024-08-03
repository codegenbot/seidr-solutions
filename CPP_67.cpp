int apples, oranges, mango;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    mango = n - apples - oranges;
    return mango;
}