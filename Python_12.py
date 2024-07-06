```
num_strings = int(input("How many strings do you have? "))
strings = [input(f"Enter string {i+1}:") for i in range(num_strings)]
total_length = sum(len(s) for s in strings)
average_length = total_length / num_strings
print("Average length of strings:", average_length)