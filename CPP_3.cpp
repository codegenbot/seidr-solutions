int main
{
    stdvector<int> operations;
    int num_operations;

    // Read the number of operations from user
    cout << "Enter the number of operations: ";
    cin >> num_operations;

    // Read each operation from user and store it in the vector
    for (int i = 0; i < num_operations; ++i) {
        int operation;
        cout << "Enter operation " << i + 1 << ": ";
        cin >> operation;
        operations.push_back(operation);
    }

    // Check if the total balance is below zero
    bool result = below_zero(operations);

    // Print the result
    if (result) {
        cout << "The total balance is below zero.\n";
    } else {
        cout << "The total balance is not below zero.\n";
    }

    return 0;
}