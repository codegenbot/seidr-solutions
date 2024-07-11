int total_number = number + min(remaining, need);
    int left_number = max(0, remaining - need);
    return {total_number, left_number};
}