bounciness_index = float(input("Enter the bounciness index: "))
num_bounces = int(input("Enter the number of bounces: "))

total_distance = (1 + 2**0.5) ** num_bounces / 4 ** (num_bounces / 2)
total_distance *= bounciness_index

print(f"Total distance is {total_distance:.6f}")