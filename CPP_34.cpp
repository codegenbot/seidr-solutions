vector<int> output = remove_duplicates_custom({5, 3, 5, 2, 3, 3, 9, 0, 123});
output.erase(unique(output.begin(), output.end()), output.end());

assert(issame(output, expected_output));

cout << "Output is correct" << endl;
return 0;