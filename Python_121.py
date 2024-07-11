```
def sum_even_index(lst):
    return sum(lst[i] for i in range(1, len(lst), 2) if lst[i] % 2 != 0)

if __name__ == "__main__":
    user_input = input("Enter space-separated integers: ")
    numbers = user_input.split()
    
    for num in numbers:
        int_num = int(num)
        if not isinstance(int_num, int):
            raise ValueError
        
    lst = [int(i) for i in numbers]
    
    try:
        print(sum_even_index(lst))
    except ValueError:
        print("     Invalid input. Please enter only integers.")