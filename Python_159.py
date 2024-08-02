def eat(number, need, remaining):
    return [(number + need) if (number + need) <= remaining else (remaining + number), 
            (remaining - ((number + need) - remaining)) if (number + need) > remaining else 0]