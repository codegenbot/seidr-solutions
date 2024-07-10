assert (issame(split_words("Hello, World!") ,{"Hello", "World!"}));
assert (issame(split_words("123 456 789") ,{"123", "456", "789"}));
assert (issame(split_words("a b c d e") ,{"a", "b", "c", "d", "e"}));
assert (issame(split_words("This is a test") ,{"This", "is", "a", "test"}));
assert (issame(split_words("Abc def ghi") ,{"Abc", "def", "ghi"}));
assert (issame(split_words("a1b2c3d4e5") ,{"a1b2c3d4e5"}));
assert (issame(split_words("a b c d e f g h i j k l m n o p q r s t u v w x y z") ,{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}));