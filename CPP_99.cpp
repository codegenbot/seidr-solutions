double num = stod(value);
    int rounded_up = ceil(num);
    int rounded_down = floor(num);
    
    return (abs(num - rounded_up) < abs(num - rounded_down)) ? rounded_up : rounded_down;
}