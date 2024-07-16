int apples, oranges, total_fruits;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    total_fruits = n - apples - oranges;
    return total_fruits;
}