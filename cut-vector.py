arr = list(map(int, input("Enter a list of positive integers separated by space: ").split()))

cut_index = arr.index(
    min(arr, key=lambda x: abs(sum(arr) - 2 * sum(arr[: arr.index(x) + 1]))
)

if cut_index == len(arr) - 1:
    cut_index -= 1

subvector1 = arr[: cut_index + 1]
subvector2 = arr[cut_index + 1 :]

print("Subvector 1:", subvector1)
print("Subvector 2:", subvector2)