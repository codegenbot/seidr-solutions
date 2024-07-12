try:
    lst = input("Enter a list of numbers separated by space: ").split()
    int_lst = []
    for i in lst:
        try:
            int_lst.append(int(i))
        except ValueError:
            pass
    if int_lst:
        print(sum_squares(int_lst))
    else:
        print("No valid numbers provided.")

except Exception as e:
    print(f"Error: {e}")