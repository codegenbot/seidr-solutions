def get_operations():
    num_lines = int(input().strip())
    operations = []
    for _ in range(num_lines):
        operations.append(list(map(int, input().strip().split())))
    return operations

operations = get_operations()