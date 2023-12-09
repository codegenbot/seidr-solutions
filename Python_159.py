
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]

def main():
    number = int(input("Enter the number of carrots: "))
    need = int(input("Enter the number of carrots needed: "))
    result = eat(number, need)
    print("Total eaten:", result[0])
    print("Carrots left:", result[1])

if __name__ == '__main__':
    main()