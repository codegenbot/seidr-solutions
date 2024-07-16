```
if __name__ == "__main__":
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = round(first_bounce_height / start_height, 5)
    num_bounces = int(input())

    total_distance = 0
    height = start_height
    for i in range(1, num_bounces + 1):
        distance = abs(height * 2)  
        total_distance += distance
        new_height = height * bounciness_index  
        bounciness_index = round(new_height / height, 5)  
        height = new_height

    print(round(total_distance, 5))