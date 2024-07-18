float total = 0.0;
    float mean = 0.0;
    
    for (auto num : numbers) {
        total += num;
    }
    
    mean = total / numbers.size();
    
    float deviation = 0.0;
    for (auto num : numbers) {
        deviation += abs(num - mean);
    }

    return deviation / numbers.size();
}