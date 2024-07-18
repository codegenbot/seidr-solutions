sort(lst.begin(), lst.end());
    int smallest = -1;
    for (int num : lst){
        if (num > smallest){
            smallest = num;
        }
    }
    int second_smallest = -1;
    for (int num : lst){
        if (num > smallest){
            second_smallest = num;
            break;
        }
    }
    if (second_smallest == -1)
        return None;
    return second_smallest;
}