int total_fruits = n;
    int apples = 0, oranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    return total_fruits - apples - oranges;
}