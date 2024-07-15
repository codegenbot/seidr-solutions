// Test with a single word input
    assert(split_words("Hello") == vector<string>{"Hello"});

    // Test with multiple words input
    assert(split_words("Hello, World!") == vector<string>{"Hello", "World"});

    // Test with special characters
    assert(split_words("Hello! How are you?") == vector<string>{"Hello", "How", "are", "you"});

    // Test with lowercase characters for count
    assert(split_words("a b c d e f g h i j k l m n o p q r s t u v w x y z") == vector<string>{"13"});