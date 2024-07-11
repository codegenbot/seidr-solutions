text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = []
start_index = 0
while True:
    start_index = text.find(target, start_index)
    if start_index == -1:
        break
    indices.append(start_index)
    start_index += len(target)

print(indices)