def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b_index = hf / h0
    n = int(input())
    total_distance = (
        (2**0.5) * abs(hf - h0) * ((1 - b_index ** (-2)) ** n) / (1 + b_index)
    )
    print(round(total_distance, 6))


bouncing_balls()