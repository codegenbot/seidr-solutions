def get_leaders(numbers):
    leaders = []
    for i in range(len(numbers)):
        if numbers[i] >= max(numbers[i+1:]):
            leaders.append(numbers[i])
    return leaders