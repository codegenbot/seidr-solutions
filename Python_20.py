def find_closest_elements(num_list):
    num_list = list(map(int, num_list.split()))
    closest_pair = float('inf')
    for i in range(len(num_list)):
        for j in range(i + 1, len(num_list)):
            if abs(num_list[i] - num_list[j]) < closest_pair:
                closest_pair = abs(num_list[i] - num_list[j])
    return str(closest_pair)

print("Closest pair is: ", find_closest_elements(input("Enter numbers separated by space: ")))