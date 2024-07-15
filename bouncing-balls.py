def calculate_distance(start_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / start_height
    total_distance = start_height + start_height * (1 + bounciness_index) * (
        1 - bounciness_index**num_bounces
    ) / (1 - bounciness_index)
    return total_distance


start_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

result = calculate_distance(start_height, bounce_height, num_bounces)
print(result)