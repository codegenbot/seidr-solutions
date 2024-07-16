int total = number + need;
    int carrotsEaten = remaining >= need ? total : total - (need - remaining);
    return {carrotsEaten, remaining >= need ? 0 : need - remaining};
}