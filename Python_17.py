user_input = []
while len(user_input) < desired_number_of_elements:
    user_input.extend(list(map(int, input().split())))