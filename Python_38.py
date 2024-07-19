try:
    input_list = []
    while True:
        num = int(input())
        if num % 2 == 0:
            input_list.append(num)
except ValueError:
    even_sum = sum(input_list)
    print(even_sum)
except:
    print("Invalid input. Please enter space-separated integers.")