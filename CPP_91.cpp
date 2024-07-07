assert(findPattern("I am bored I am bored I am bored") == 3);
    int count = findPattern("You and I are going for a walk");
    if(count == -1) {
        std::cout << "Error: Pattern not found." << std::endl;
    }
    return 0;
}