def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bf = hf / h0
    bounces = int(input())
    distance = 2 * (bf**bounces)
    print(round(distance, 4))


bouncing_balls()