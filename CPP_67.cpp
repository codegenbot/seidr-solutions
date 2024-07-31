int total_apples = 0, total_oranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges", &total_apples, &total_oranges);
    return n - total_apples - total_oranges;
}